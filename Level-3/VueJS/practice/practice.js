const app = Vue.createApp({
    data() {
        return {
            name:"Aung Aung",
            age: 12,
            inputText:''
        }
    },
    
        
});

const app4 = Vue.createApp({
    data() {
      return {
        userInput:'',
        toDo:'',
        toDoItem:[],
        push:true,
        a:23,
        b:23,
        greater:'',
        small:'',
        equal:'',
        index:''
        
      }
    },
    methods:{
      showData() {
        if(this.userInput == '') {
          alert("Please input any task");
          return;
        }
        if(this.push) {
            this.toDoItem.push(this.userInput);
            this.userInput = '';
        } else {
            this.toDoItem.splice(this.index, 1, this.userInput);
            // this.toDoItem.push(this.userInput);
            this.userInput ='';
            this.push = true;
            

        }
        
        
        
      },

      doDelete(i) {
        var del = confirm("Are you want to delete this task?");
        if(del) {
          this.toDoItem.splice(i, 1);
          
        }
        
       },
       doEdit(i) {
                this.index = i;
                this.userInput = this.toDoItem[this.index];
                this.push = false;
                
                
      }

    },
    
});