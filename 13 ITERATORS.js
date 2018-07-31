let artists = ['Picasso', 'Kahlo', 'Matisse', 'Utamaro'];

artists.forEach(function(artist) {
  console.log(artist + ' is one of my favorite artists.');
});

let numbers = [1, 2, 3, 4, 5];

let squareNumbers = numbers.map(function(number) {
  return number * number;
});

console.log(squareNumbers);

let things = ['desk', 'chair', 5, 'backpack', 3.14, 100];

let onlyNumbers = things.filter(function(thing) {
  return typeof thing === 'number';
});

console.log(onlyNumbers);

//----------------------------------------------------------------------------
let fruits = ['mango', 'papaya', 'pineapple', 'apple'];

// Iterate over fruits below
fruits.forEach(function(fruit){
               console.log('I want to eat a '+fruit)
});
// using arrow function syntax
fruits.forEach(fruit => console.log('I want to eat a '+fruit));

//----------------------------------------------------------------------------
let cities = ['Nashville', 'Charlotte', 'Asheville', 'Austin', 'Boulder'];

let nums = [1, 50, 75, 200, 350, 525, 1000];

//  Choose a method that will return undefined
cities.forEach(city => console.log('Have you visited ' + city + '?'));

// Choose a method that will return a new array
let longCities = cities.filter(city => city.length > 7);

// Choose a method that will return a new array
let smallerNums = nums.map(num => num - 5);

// Choose a method that will return a boolean value
nums.some(num => num < 0);
