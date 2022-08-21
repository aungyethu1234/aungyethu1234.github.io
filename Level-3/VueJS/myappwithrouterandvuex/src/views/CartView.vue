<template>
  <div class="cart">
      <section v-if="cart.length > 0">
          <table class="table">
            <thead>
              <tr>
                <th scope="col">No.</th>
                <th scope="col">Name</th>
                <th scope="col">Qty</th>
                <th scope="col">Price</th>
              </tr>
            </thead>
            <tbody>
              <tr v-for="(item, index) in cart" :key="index">
                <th scope="row">{{++index}}</th>
                <td>{{item.title}}</td>
                <td>{{item.qty}}</td>
                <td>{{item.price}} $</td>
              </tr>
              
            </tbody>
          </table>
      </section>

      <section v-else>
          <h2 class="text-center">Empty cart</h2>
      </section>
  </div>
</template>


<script>

    export default {
    name: 'DetailView',
    data() {
      return {
       cart:[],
        
        
      }
  },
  mounted() {
    let cartArr;
    let cart = localStorage.getItem('cart');
      if(cart) {
          cartArr = JSON.parse(cart);
      }
    this.cart = cartArr;
  },
  
    };

</script>
