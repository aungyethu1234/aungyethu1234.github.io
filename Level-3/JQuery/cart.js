$(function () {
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
        console.log(item);

        var cartStr = localStorage.getItem('cart');
        if(!cartStr) {
            var itemArr = new Array();
        } else {
            var itemArr = JSON.parse(cartStr)
        }
        itemArr.push(item);
        localStorage.setItem('cart', JSON.stringify(itemArr));
    })
})