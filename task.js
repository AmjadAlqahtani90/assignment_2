/ JavaScript: Calculate total and average

let numbers = [10, 20, 30, 40, 50];

let total = 0;

for (let number of numbers) {
    total += number;
}

let average = total / numbers.length;

console.log("Total:", total);
console.log("Average:", average);