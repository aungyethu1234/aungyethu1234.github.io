<template>
  <div class="about">
    <div class="card mb-3">
      <div class="row g-0">
        <div class="col-md-4">
          <img :src="product.image" class="img-fluid rounded-start" alt="...">
        </div>
        <div class="col-md-8">
          <div class="card-body">
            <h5 class="card-title">{{product.title}}</h5>
            <p class="card-text">This is a wider card with supporting text below as a natural lead-in to additional content. This content is a little bit longer.</p>
            <p class="card-text"><small class="text-muted">Last updated 3 mins ago</small></p>
            <button type="button" class="btn btn-primary" @click="insertItem(product)">Add to cart</button>
            
          </div>
        </div>
      </div>
    </div>
  </div>
</template>

<script>
const axios = require('axios');
    export default {
    name: 'DetailView',
    data() {
      return {
        product:Object,
        message:"Hello World",
        qty:1,
        total:0,
        qtyStatus:0,
        
        
      }
  },
  mounted() {
    this.getDetail();
  },
  methods: {
    getDetail() {
        let id = this.$route.params.id;
        axios.get('/products/' + id)
        .then(response => {
          this.product = response.data;
      // console.log(response.data);
    })
    },
    insertItem(p) {
      let cartArr;
      let status = false;
      
      let cart = localStorage.getItem('cart');
      if(!cart) {
        cartArr = new Array();
      } else {
        cartArr = JSON.parse(cart) // reach id-4 object in cartArr
      }
      p.qty = this.qty; // p.qty = 1 qty of id-4 is 
      // var qtyStatus = 0;

      for(var item of cartArr) { 
          this.total += item.qty * item.price;
          this.qtyStatus += item.qty;
            if(item.id == p.id) {
              item.qty++;
              item.qty += p.qty;
              status = true;
              return false;

        }
        
      }
      
      if(!status) {

          cartArr.push(p);
        
        }

      localStorage.setItem('cart', JSON.stringify(cartArr));
      
    }
  }
}
</script>
