/* Write a function that finds that first element that repeats itself in an array. */
function firstRepeatingElement(arr) {
  const seen = new Set();

  for (let num of arr) {
    if (seen.has(num)) {
      return num; // First element that repeats
    }
    seen.add(num);
  }

  return null; // If no repeating element is found
}

// Example:
console.log(firstRepeatingElement([2, 5, 1, 2, 3, 5, 1, 2, 4])); // Output: 2
console.log(firstRepeatingElement([1, 2, 3, 4])); // Output: null
