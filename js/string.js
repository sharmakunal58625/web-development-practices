let str1="kunal";
let str2="sharma";
let str3="          kunal           .";
let x=str1.length;
console.log(x);
console.log(str1.length);
console.log(str1[4]);
let obj={
    name:"pen",
    price:10
}
console.log("item is ",obj.name ,"and price is",obj.price); //10 is numeric
console.log(`item is ${obj.name} and price is ${obj.price} `); //10 is string
console.log("kunal\nsharma");
console.log(str2.toUpperCase());
console.log(str1.toUpperCase());
console.log(str2.toLowerCase());
console.log(str3);
console.log(str3.trim());
console.log(str1);
console.log(str2);
console.log(str3);


let a=132123;
let b="kunal";
let c="sharma";
let d="helololo";
let gh=b.slice(1,5);
console.log(gh);
console.log(b.slice(1,5));
console.log(b.slice(1,5));

console.log(a+b);
console.log(a+a);
console.log(b+a);
console.log(b.concat(c));
console.log(b.concat(b));



console.log(b.replace("k","x"));
console.log(d.replace("lo","x"));
console.log(d.replaceAll("lo","x"));


console.log(d.charAt(3));
console.log(d[3]);