const URL="https://cat-fact.herokuapp.com/facts";

const getfacts=async()=>{
    console.log("fetching data");
    let response=await fetch(URL);
    console.log(response);
    let data = await response.json();
    console.log(data[0]);
};