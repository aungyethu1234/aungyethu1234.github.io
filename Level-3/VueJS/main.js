
    
const app =  Vue.createApp({
        data() {
          return {
            message: '<h3 style="color: red;">Hello Vue!</h3>',
            name: 'Aung Ye Thu',
            age: 28,
            photo:'images/computer.jpg',
            seen:true,
            colors:['red', 'green', 'blue'],
            students: [
              {name: 'Mg Mg', age: 22, gender:'male'},
              {name: 'Hla Hla', age: 24, gender:'female'},
              {name: 'Kyaw Kyaw', age: 30, gender:'male'}
            ],
            count:1,
            username:''
            
          }
        },
        methods:{
          openAlert() {
            // alert("Hello Vue");
            alert(this.name);
          }
        }
      });

const app2 = Vue.createApp({
  data() {
    return {
      title:'BMI calculator',
      ft:'',
      inch:'',
      result:'',
      weight:'',
      normal:'',
      underweight:'',
      overweight:'',
      obesity:''


    }
  },
  methods:{
    showResult() {

        if(this.ft == '' || this.weight == '') {
          if(this.ft == '' && this.weight == '') {
            alert("Please enter feet and weight");
            this.result = '';
            this.normal = false;
            this.overweight = false;
            this.underweight = false;
            this.obesity = false;
            return;
          }
          if(this.ft == '' && this.weight != '') {
            alert("Please enter feet")
            this.result = '';
            this.normal = false;
            this.overweight = false;
            this.underweight = false;
            this.obesity = false;
            return;
          }
          if(this.ft != '' && this.weight == '') {
            alert("Please enter weight");
            this.result = '';
            this.normal = false;
            this.overweight = false;
            this.underweight = false;
            this.obesity = false;
            return;
          }
          
        }
        
        var height = 0;
          height = this.ft*12 + this.inch;
          this.result = this.weight/Math.pow(height,2)* 703;
          this.result = (this.result).toFixed(1);
          if(this.result < 18.5) {
            this.underweight = true;
            this.overweight = false;
            this.obesity = false;
            this.normal = false;
          }
          if(this.result >= 18.5 && this.result <= 24.9) {
            this.normal = true;
            this.underweight = false;
            this.overweight = false;
            this.obesity = false;
          }
          if(this.result >= 25 && this.result <= 29.9) {
            this.overweight = true;
            this.normal = false;
            this.underweight = false;
            this.obesity = false;
          }
          if(this.result >= 30) {
            this.obesity = true;
            this.overweight = false;
            this.normal = false;
            this.underweight = false;
          }
       

    },
  }
});