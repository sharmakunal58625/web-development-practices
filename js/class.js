const student={
    fulname:"kunal",
    marks:52,
    printmarksa: function(){
        console.log("marks =",this.marks);
    }
}
const teacher={

 
}
teacher.__proto__ =student;


class car{
    start(){
        console.log("start");
    }
    stop(){
        console.log("stop");
    }
}
let fortuner = new car();
