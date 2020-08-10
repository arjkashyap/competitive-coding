async function getCountryName(code) {
  // write your code here
  // API endpoint: https://jsonmock.hackerrank.com/api/countries?page=<PAGE_NUMBER>

  /*
0: Object { name: "Afghanistan", nativeName: "افغانستان", alpha2Code: "AF", … }
​
1: Object { name: "Åland Islands", nativeName: "Åland", alpha2Code: "AX", … }
​
2: Object { name: "Albania", nativeName: "Shqipëria", alpha2Code: "AL", … }

  */

  console.log("fack");
  const url = "https://jsonmock.hackerrank.com/api/countries?page=1";
  let totalPage = 0;
  await fetch(url)
    .then((res) => res.json())
    .then((data) => {
      perPage = data.per_page;
    });
  console.log("looping");

  for (let num in totalPage) {
    console.log("eh ?");
    url = `https://jsonmock.hackerrank.com/api/countries?page=${num}`;
    let countryData;
    let perPage = 0;
    fetch(url)
      .then((res) => res.json())
      .then((data) => {
        perPage = data.per_page;
        countryData = data.data;
      });

    for (let countryIndex = 0; countryIndex < perPage; countryIndex++) {
      console.log(countryData[countryIndex].name);
    }
  }
}
