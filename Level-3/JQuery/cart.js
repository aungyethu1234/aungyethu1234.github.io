$(function () {
    getData();
    
    $("button.atcbtn").on("click", function () {
        
        var id = $(this).data("id");
        var name = $(this).data("name");
        var price = $(this).data("price");

        var item = {
            id: id,
            name: name,
            price: price,
            qty: 1
        }
        // console.log(item);

        var cartStr = localStorage.getItem('cart');
        if(!cartStr) {
            var itemArr = new Array();
        } else {
            var itemArr = JSON.parse(cartStr)
        }

        var status = false;
        $.each(itemArr, function(i, v) {
            if(v.id == item.id) {
                v.qty++;
                status = true;
                return false;
            }
        })

        if(status == false) {
            itemArr.push(item);
        }
        
       localStorage.setItem('cart', JSON.stringify(itemArr));
        var test = localStorage.getItem('cart');
        console.log("test is ",JSON.parse(test));
        getData();
    })
    
    function getData() {
        var cartStr = localStorage.getItem("cart");
        var data ='';
        // console.log(cartStr);
        if(!cartStr) {
            $(".table").hide();
            $(".cartData").html("Your cart is empty");
            var shopButton = `<button type="button" class="btn">Continue shopping</button>`;
            $(".shopBtn").html(shopButton);
            $(".qty").html("0");
            
        } else {
            var numSeries = 1;
            cartArr = JSON.parse(cartStr);
            // console.log(cartArr);
            var total = 0;
            var qtyStatus = 0;
            $.each(cartArr, function(i, v) {
                total += v.qty*v.price;
                qtyStatus += v.qty;
                data += `<tr> 
                            <td>${numSeries++}
                            <button class="delBtn" data-index="${i}">X</button></td>
                            <td>${v.name}</td>
                            <td>${v.price}</td>
                            <td><button class="minBtn" data-index="${i}" data-qty="${v.qty}">-</button> ${v.qty} <button class="plusBtn" data-index="${i}">+</button></td>
                            <td>${v.qty*v.price}</td>
                        </tr>`;
                    
            })
            data += `<tr>
                        <td colspan="4">Total</td>
                        <td>${numberFormat(total)}</td>
                    </tr>`;
            $(".table").show();
            $(".cartData").html("");
            $(".shopBtn").html("");
        }
        $("#cartItems").html(data);
        if(qtyStatus == 1) {
            qtyStatus-1;
        }
        $(".qty").html(qtyStatus);
    }
    // Decrease Qty 
    $("#cartItems").on("click", ".minBtn", function() {
        var index = $(this).data("index");
        var cartStr = localStorage.getItem("cart");
        var cartArr = JSON.parse(cartStr);
       
        // console.log(--qty);
        if(cartArr[index].qty > 1) {
            cartArr[index].qty--;
        } else {
            var status = confirm("Are you want to delete");
            if(status) {
                cartArr.splice(index, 1);
            }
        }
        localStorage.setItem('cart', JSON.stringify(cartArr));
        getData();

        
    })

    // Increase Qty 
    $("#cartItems").on("click", ".plusBtn", function() {
        var index = $(this).data("index");
        var cartStr = localStorage.getItem("cart");
        var cartArr = JSON.parse(cartStr);
       
        // console.log(cartArr);
        cartArr[index].qty++;
        
        localStorage.setItem('cart', JSON.stringify(cartArr));
        getData();

        
    })
    function numberFormat(x) {
        return x.toString().replace(/\B(?=(\d{3})+(?!\d))/g, ",");
    }

    // Delete Row
    $("#cartItems").on("click", ".delBtn", function() {
        var index = $(this).data("index");
        var cartStr = localStorage.getItem("cart");
        var cartArr = JSON.parse(cartStr);
        var status = confirm("Are you want to delete");
        
        if(status) {
            cartArr.splice(index, 1);
        }
        var setData = true;
        if(cartArr.length == 0) {
            localStorage.clear("cart");
            $(".qty").html("0");
            setData = false;
            
        }
            
        if(setData) {
            localStorage.setItem('cart', JSON.stringify(cartArr));
        }
        getData();

    })
    $(".shopBtn").on("click",".btn", function(event) {
       
        $(".nav li a").removeClass("active");
        $("li a#shopp").addClass("active");
        $(".content").slideUp();
        var shop_href = $("li a#shopp").attr("href");
        $(shop_href).slideDown();
        event.preventDefault();
        getData();
    })

    

})