
    
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
      title:'BMI Calculator',
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
            this.hideElement();
            return;
          }
          if(this.ft == '' && this.weight != '') {
            alert("Please enter feet")
            this.hideElement();
            return;
          }
          if(this.ft != '' && this.weight == '') {
            alert("Please enter weight");
            this.hideElement();
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
    hideElement() {
            this.result = '';
            this.normal = false;
            this.overweight = false;
            this.underweight = false;
            this.obesity = false;
    }
  }
});
const app3 =  Vue.createApp({
  data() {
    return {
      // age: Number,
      // isButtonDisabled:true,
      // isInputDisabled:true,
      // mark: 50,
      // isActive: true,
      // hasError: false,
      students: [
        {name: 'Mg Mg', age: 22, gender: 'male'},
        {name: 'Su Su', age: 23, gender: 'female'},
        {name: 'Bo Bo', age: 20, gender: 'male'}
      ]
      
    }
  },
  methods: {
    mybtn() {
      if(this.age >= 18) {
        this.isInputDisabled = false;
      }
    },

    validate(i) {
      var i = --i;
      alert(`My name is ${this.students[i].name} , my age is ${this.students[i].age} and I am ${this.students[i].gender}.`);
    },
  }
  
});

const app4 =  Vue.createApp({
  data() {
    return {
      status:true,
      items:Array(),
      name:"Aung Ye Thu",
    }
  },
  mounted() {
    // this.name = this.name.split('').reverse().join('');
    //console.log(`the component is now mounted`);
    axios.get("https://api.imgflip.com/get_memes")
    .then(response => {
      console.log(response.data)
      if(response.data.success == true) {
        this.items = response.data.data.memes
      }
    })
    
    .catch(err => {
      console.log(err);
    })
  },
  methods: {
   

    
  }
  
});

const app5 =  Vue.createApp({
  data() {
    return {
      students: [
        {name: 'Mg Mg', age: 16, gender:'male'},
        {name: 'Su Su', age: 23, gender:'female'},
        {name: 'Bo Bo', age: 16, gender:'male'},
      ],
      arr:Array(),
      
    }
  },
  
  methods: {
   
    
  },
  computed: {
    boys() {
      return this.students.filter(row => row.gender == 'male');
    },

    adults() {
      return this.students.filter(row => row.age >= 18);
    }
  }
  
});

const app6 =  Vue.createApp({
  data() {
    return {
      show:true,
      test:"Hello Vue",
      isBlue:'true',
      isSkyblue:'',
    }
  },
  mounted() {
        axios.get("https://restcountries.com/v3.1/all")
        .then(data => {
          console.log(data);
          if(data.success) {
            this.arr = data;
            console.log(this.arr);
          }
        })
  },
  
  methods: {
      changeBackground() {

      }
    
  },
  computed: {
    
  }
  
});

const app7 =  Vue.createApp({
  data() {
    return {
      data:'',
    }
  },
  mounted() {
        
  },
  
  methods: {
      
    
  },
  computed: {
    
  }
  
});

