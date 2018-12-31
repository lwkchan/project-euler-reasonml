/* First attempt */
/* let f = number => {
     let res = ref(0);
     for (x in 1 to number - 1) {
       if (x mod 3 === 0 || x mod 5 === 0) {
         res := res^ + x;
       };
     };
     res^;
   }; */

let f = number =>
  Array.init(number, x => x)
  |> Array.to_list
  |> List.filter(x => x mod 3 == 0 || x mod 5 == 0)
  |> List.fold_left((x, y) => x + y, 0);