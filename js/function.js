function kunal(){
    console.log("my name is kunal");
}
kunal();

// function name1(msg){
//     console.log(msg);
// }
// msg = prompt("enter your name");
// name1(msg);

// function addition(a,b){
//     c=a+b;
//  console.log(c);
// }
// a=Number(prompt("enter first no"));
// b=Number(prompt("enter 2nd no"));
// addition(a,b);


console.log("j");
console.log("j");
console.log("j");


 function sum(a,b){   
      c=a+b;
      return c;
}
let g=sum(1,2);
console.log(g);

let additiion=(a,b)=>{
  
  console.log(a+b);
 };
 additiion(2,5);

 function countvow(str){
    let count=0;
    let a=["a","e","i","o","u"];
    for(let i=0;i<str.length;i++){
        for(let j=0;j<5;j++){
        if(str[i]===a[j]){
            count++;

            break;
        }
        }
    }
    return count;
}
let input="e ti tset yf ssdb dr ht";
console.log(countvow(input));


let arr=[1,2,3,4,5,6,];
arr.forEach(function printval(vall){
    console.log(vall);
});
let arrr=[1,2,3,4,5,6,];
arrr.forEach((val , idx ,arrr)=>{
    console.log(val,idx,arr);
});

let m=[1,2,3,4,5];
m.forEach((val)=>{
let q=val*val;
console.log(q);
});

let mapp=[1,2,3,4,5];
let k=mapp.map((val)=>{
return val%2==0;
});
console.log(k);

let filterr=[1,2,3,4,5];
let fi=filterr.filter((val)=>{
return val*val;
});
console.log(fi);

let redu=[1,2,3,4,5];
let redd=redu.reduce((res,cur)=>{
return res+cur;
});
console.log(redd);





let b = prompt("enter a no");
let x=[];
for(let i=1;i<=b;i++){
    x[i-1]=i;
}
console.log(x);