<template>
  <div class="about">
    <h1 class="text-warning mt-2">All products</h1>
      <div class="dropdown">
          <a class="btn btn-secondary dropdown-toggle" href="#" role="button" data-bs-toggle="dropdown" aria-expanded="false">
            Categories
          </a>

          <ul class="dropdown-menu">
            <li><button class="dropdown-item" type="button" @click="getProductsByCategory(item)" v-for="(item, index) in categories" :key="index">{{item}}</button></li>
            
          </ul>
      </div>
      <div class="container mt-3 mx-auto">
        <div class="row row-cols-1 row-cols-md-3 g-5" v-if="shop.length > 0">
            <div class="col-md-4 col-xxl-3" v-for="(items, index) in shop" :key="index">
                <div class="card h-100">
                  <img :src="items.image" class="card-img-top img-fluit" :id="items.id" alt="">
                  <div class="card-body">
                      <h5 class="card-title">{{items.title}}</h5>
                      <!-- <p class="card-text">{{items.description}}</p> -->
                      <!-- <router-link :to="`/detail/${items.id}`" class="btn btn-primary" >Detail</router-link> -->
                      <router-link :to="{ name: 'detail', params: { id: items.id }}" class="btn btn-primary" >Detail</router-link>
                  </div>
              </div>
            </div>
        </div>
      </div>
        
    
    

  </div>
</template>

<script>
const axios = require('axios');
export default {
  name: 'ShopView',
  data() {
    return {
      shop:[],
      categories:[],
    }
  },
  mounted() {
    this.getProducts();
    this.getCategories();
},
methods: {
  getProducts() {
      axios.get('https://fakestoreapi.com/products')
      .then(response => {
        // console.log(response.data[0].image);
        this.shop = response.data;
    })
  },

  getCategories() {
      axios.get('/products/categories')
      .then(response => {
        // console.log(response.data[0].image);
        this.categories = response.data;
    })
  },

  getProductsByCategory(name) {
      axios.get('/products/category/'+ name)
      .then(response => {
        // console.log(response.data[0].image);
        this.shop = response.data;
    })
  }
}
  
};
</script>

<style>
  * {
    margin:0;
    padding:0;
  }
  img {
    height:300px;
  }
</style>