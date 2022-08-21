import { createStore } from 'vuex'

export default createStore({
  state: {
    cart: localStorage.getItem('cart') | '',
    name:'Aung Ye Thu',
    age:27,
    students:[
      {name: 'mg mg', age: 19},
      {name: 'Aung Aung', age: 23},
      {name: 'Mya Mya', age: 35},
    ],
    loading:false,
  },
  getters: {
    adults(state) {
        return state.students.filter(row => row.age >= 18);
    }
  },

  mutations: {
    increment (state, payload) {
      state.age += payload
    },
    // loading(state) {
    //     state.loading = true;
    // },
    // notloading(state) {
    //     state.loading = false;
    // },
    // setproducts(state, payload) {
    //     state.products = payload;
    // }
  },

  actions: {
    increment (context, data) {
      context.commit('increment', data);
    },
    // getProducts(context) {
    //     context.commit('loading')
    //     context.commit('notloading')
    //     context.commit('setproducts', [])
    // }
  },
  
  modules: {
  }
})
