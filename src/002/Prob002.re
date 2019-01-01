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
    if (fib(current^) >= number) {
      break := true;
    } else {
      if (fib(current^) mod 2 == 0) {
        res := res^ + fib(current^);
      };
      current := current^ + 1;
    };
  };
  res^;
};