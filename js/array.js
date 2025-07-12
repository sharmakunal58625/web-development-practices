console.log("hii");
let marks=[25,26,24,23,21,];
console.log(marks);
console.log(marks.length);
let gero=["hii","nii","fii"];
console.log(gero);
console.log(gero.length);
console.log(typeof marks);


console.log(marks[4]);
console.log(marks[56]);
console.log(gero[1][0]);

marks[1]=66;
console.log(marks);

gero[0]="asdf";
console.log(gero);

for(let i=0;i<marks.length;i++)
{
    console.log(marks[i]);
}



let sum=0;
let z=0;
for(let i=0;i<marks.length;i++)
{sum= sum+marks[i];   
}   
z=sum/marks.length;
console.log("avg is =",z);



for(let x of marks)
{
    console.log(x);
}


let suum=0;
for(let x of marks)
{
    // console.log(x);
    suum=suum+x;
}
avg=sum/marks.length;
console.log(avg);

let item=[250,300,350,456,253,100];
let val=0;
let offer=0;
for(let i=0;i<item.length;i++)
{
    offer=item[i]/10;
    item[i]=item[i]-offer;
}
console.log(item);

//array methods
let fruit=["mango","apple","banana","orange","papaya"];
let veg=["potato","tomato","aalu","gobi","onion"];
let roll=[1,2,3,4,5,6,7,8,9,10];

fruit.push("last");
console.log(fruit);
veg.pop();
console.log(veg); //change in actual array

console.log(roll.toString());
console.log(roll); //not change in actual array

console.log(veg);
console.log(fruit.concat(veg));
console.log(fruit.concat(veg,roll));
console.log(fruit); //not change in actual array

fruit.unshift("first") // add item at first location
console.log(fruit);

fruit.shift();
console.log(fruit); // delete from start

console.log(roll.slice(3,6)); //slicing and does not change actual array
console.log(roll.slice(0,6));
console.log(roll.slice(3,20));


//splice() change in actual aray
let w=[1,2,3,4,5,6,7,8,9];
// console.log(w.splice(5));

w.splice(2,1,70);
console.log(w);

w.splice(5,1,8);
console.log(w);