let rec fib = number =>
  switch (number) {
  | 0 => 0
  | 1 => 1
  | n => fib(n - 1) + fib(n - 2)
  };

let f = number => {
  let break = ref(false);
  let current = ref(0);
  let res = ref(0);
  while (! break^) {
    let currentFib = fib(current^);
    if (currentFib >= number) {
      break := true;
    } else {
      if (currentFib mod 2 == 0) {
        res := res^ + currentFib;
      };
      current := current^ + 1;
    };
  };
  res^;
};