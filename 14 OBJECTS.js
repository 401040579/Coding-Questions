let restaurant = {
  name: 'Italian Bistro',
  seatingCapacity: 120,
  hasDineInSpecial: true,
  entrees: ['Penne alla Bolognese', 'Chicken Cacciatore', 'Linguine pesto']
};

console.log(restaurant.entrees);
console.log(restaurant['entrees']);

let meal = 'none';
let time = 12;
// We'll use military time for this example, counting hours 0-23.

const restaurantSpecials = {
 breakfast: 'The breakfast special is 20% off freshly squeezed orange juice',
 lunch: 'The lunch special is 10% off appetizers',
 none: 'There are no specials currently'
};

if (time < 11) { // 11 am
  meal = 'breakfast';
} else if (time < 17) { // 5 pm
  meal = 'lunch';
}

console.log(restaurantSpecials[meal]);

//--------------------------------------------------------------------------------------------
let person = {
  _name: 'Lu Xun',
  _age: 137,
  
	set age(newAge){
    if(typeof newAge === 'number'){
  		this._age = newAge;
    }else{
       return 'Invalid input';
		}
},
  get age(){
    console.log(`${this._name} is ${this._age} years old.`)
    return this._age;
  }
};

person.age=39;
console.log(person.age)
