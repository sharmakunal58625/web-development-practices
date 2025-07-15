// console.log("frisst");
// console.log("2");
// setTimeout(()=>{
// console.log("hello");
// },4000);
// console.log("3");
// console.log("4");
// function sum(a,b){
//     console.log(a+b);
// }
// function cal(c,d,sumcal){
//     sumcal(c,d);
// }
// cal(4,5,sum);

// const { reject } = require("async");

// const { reject } = require("async");

// let age=19;
// if(age>=18){
//     if(age>=60){
//         console.log("senior");
// }
//     else{
//         console.log("middle");
//     }
//     console.log("child");
// }



// function getdata(dataid , getnextdata){
//    setTimeout(()=>{
// console.log("data",dataid);
// if(getnextdata){
//     getnextdata();
// }
//    },2000); 
// }
// getdata(4,()=>{
//     getdata(2,()=>{getdata(3,()=>{
//         getdata(4);
//     })});
// });



// function getdata(dataid , getnextdata){
//     return new Promise((resolve , reject)=>{
//  setTimeout(()=>{
// console.log("data",dataid);
// resolve("success");
// if(getnextdata){
//     getnextdata();
// }
//    },2000);
//     }) 
// }
// let promise = getdata(12);
// console.log(promise);

// promise.then((res)=>{
//     console.log("completed",res);
// })





// function getdata(dataid , getnextdata){
//     return new Promise((resolve , reject)=>{
//  setTimeout(()=>{
// console.log("data",dataid);
// reject("rejected");
// if(getnextdata){
//     getnextdata();
// }
//    },2000);
//     }) 
// }
// let promise = getdata(12);
// console.log(promise);

// promise.then((res)=>{
//     console.log("completed",res);
// })
// promise.catch((err)=>{
//     console.log("rejected",err);
// })




//promise chain
// function getdata(dataid){
//     return new Promise((resolve , reject)=>{
//         setTimeout(()=>{
//             console.log("data",dataid);
//             resolve("success");},3000
//         );
//     });}

// getdata(1).then((res)=>{
//     return getdata(2).then((res)=>{
//         return getdata(3).then((res)=>{
//             return getdata(4).then((res)=>{
//                 console.log(res);
//             })
//         })
//     })
// })

//async await
function getdata(dataid){
    return new Promise((resolve , reject)=>{
        setTimeout(()=>{
            console.log("data",dataid);
            resolve("success");},3000
        );
    });}
    async function getthedata() {
        await getdata(1);
        await getdata(3);
        await getdata(4);
        await getdata(5);
        await getdata(6);
    }
