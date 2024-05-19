<a id="title"></a>
# Birthday Cake Candles

Link -> [https://www.hackerrank.com/challenges/birthday-cake-candles/problem](https://www.hackerrank.com/challenges/birthday-cake-candles/problem)

## Problem

You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. They will only be able to blow out the tallest of the candles. Count how many candles are tallest. 

----

### Example

$candles = [4, 4, 1, 3]$

The maximum height candles are $4$ units high. There are $2$ of $2$ them, so return $2$.

----

### Function Description

Complete the function `birthdayCakeCandles` in the editor below. 

`birthdayCakeCandles` has the following parameter(s):

- int candles[n]: the candle heights.

----

### Return

- int: the number of candles that are tallest.

----

### Input Format

The first line contains a single integer, $n$, the size of $candles\[\]$. 

----

### Constraints

- $1 \leq n \leq 10^{5}$

- $1 \leq candles[i] \leq 10^{7}$

----

### Sample Input

```bash
4
3 2 1 3
```

----

### Sample Output

```bash
2
```

----

### Explanation

Candle heights are $[3, 2, 1, 3]$. The tallest candles are $3$ units, and there are $2$ of them. 

[Go to the top of the page](#title)

----

## Tests

The test cases are the following, in which you can find: _input_ and _expected output_.

----

### Test case 0

#### Input

```bash
4
3 2 1 3
```

#### Expected Output

```bash
2
```

----

### Test case 6

#### Input

```bash
100000 
9999999 9999999 9999999 9999999 9999999 9999999 9999999 9999999 9999999 9999999 9999999 9999999 9999999 9999999 9999999 9999999 9999999 9999999 9999999 9999999 9999999 9999999 9999999 9999999 9999999 9999999 ...
```

#### Expected Output

```bash
100000
```

[Go to the top of the page](#title)
