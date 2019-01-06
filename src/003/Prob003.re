let getMultiples = number => {
  let res =
    Array.init(number - 2, x => x + 2)
    |> Array.to_list
    |> List.filter(x => number mod x == 0)
    |> List.sort(compare)
    |> Array.of_list;
  res;
};

let rec f = number => {
  let multiples = getMultiples(number);
  if (Array.length(multiples) > 1) {
    f(multiples[Array.length(multiples) - 1]);
  } else {
    number;
  };
};

/*

 int getLargestPrime(int number) {
     int factor = number; // assumes that the largest prime factor is the number itself
     for (int i = 2; (i*i) <= number; i++) { // iterates to the square root of the number till it finds the first(smallest) factor
         if (number % i == 0) { // checks if the current number(i) is a factor
             factor = max(i, number / i); // stores the larger number among the factors
             break; // breaks the loop on when a factor is found
         }
     }
     if (factor == number) // base case of recursion
         return number;
     return getLargestPrime(factor); // recursively calls itself
 }

    def largest_prime_factor(number)
    i = 2
    while number > 1
      if number % i == 0
        number /= i;
        i -= 1
      end
      i += 1
    end
    return i
  end */