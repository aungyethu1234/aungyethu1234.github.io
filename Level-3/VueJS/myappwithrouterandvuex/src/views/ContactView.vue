<template>
  <div class="contact">
    <h1>This is an contact page</h1>
    {{this.$store.state.name}}
    {{this.$store.state.age}}
    <button @click="increase">Increase</button>
    {{adults}}
  </div>
</template>

<script>
  export default {
    data() {
      return {
        adults: this.$store.getters.adults,
      }
    },
    methods:{
      increase() {
       this.$store.dispatch('increment', 2)
      }
    }
  }
</script>

<style>

</style>
