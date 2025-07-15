function getdata(dataid){
    return new Promise((resolve , reject)=>{
        setTimeout(()=>{
            console.log("data",dataid);
            resolve("success");},3000
        );
    });}
    (async function getthedata() {
        await getdata(1);
        await getdata(3);
        await getdata(4);
        await getdata(5);
        await getdata(6);
    })();