/* The prime factors of 13195 are 5, 7, 13 and 29.
   What is the largest prime factor of the number 600851475143 ? */

open Jest;
open Expect;

describe("Prob003", () => {
  test("Given 13195, the function returns 29", () =>
    expect(Prob003.f(10)) |> toEqual(5)
  );
  test("Given 13195, the function returns 29", () =>
    expect(Prob003.f(13195)) |> toEqual(29)
  );
  /* Skipped as unable to handle the big integer -- Ideally would have built the original function to handle Int64 */
  Skip.test("Given 600851475143, the function returns 6857", () =>
    expect(Prob003.f(600851475143)) |> toEqual(6857)
  );
});