let btn=document.querySelector(".mode");
let currmode="light";

btn.addEventListener("click",() =>{
    if(currmode === "light"){
        currmode="no";
        document.querySelector("body").style.backgroundColor="black";
    }
    else{
        currmode="light";
        document.querySelector("body").style.backgroundColor="white";
    }
})