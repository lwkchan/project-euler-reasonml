/* If we list all the natural numbers below 10 that are multiples
   of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
   Find the sum of all the multiples of 3 or 5 below 1000. */

open Jest;
open Expect;

describe("Prob001", () => {
  test("given 10, the function returns 23", () =>
    expect(Prob001.f(10)) |> toEqual(23)
  );
  test("given 15, the function returns 35", () =>
    expect(Prob001.f(15)) |> toEqual(45)
  );
  test("given 1000, the function returns 233168", () =>
    expect(Prob001.f(1000)) |> toEqual(233168)
  );
});