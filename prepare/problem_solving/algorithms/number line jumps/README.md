<a id="title"></a>
# Number Line Jumps

Link -> [https://www.hackerrank.com/challenges/kangaroo/problem](https://www.hackerrank.com/challenges/kangaroo/problem)

## Problem

You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity).

- The first kangaroo starts at location $x_1$ and moves at a rate of $v_1$ meters per jump.
- The second kangaroo starts at location $x_2$ and moves at a rate of $v_2$ meters per jump.

You have to figure out a way to get both kangaroos at the same location at the same time as part of the show. If it is possible, return `YES`, otherwise return `NO`. 

### Example

$x_1 = 2$

$v_1 = 1$

$x_2 = 1$

$v_2 = 2$

After one jump, they are both at $x = 3. (x_1 + v_1 = 2 + 1 | x_2 + v_2 = 1 + 2)$. So the answer is `YES`.

### Function Description

Complete the function `kangaroo` in the editor below.

`kangaroo` has the following parameter(s):

- int x1, int v1: starting position and jump distance for kangaroo 1
- int x2, int v2: starting position and jump distance for kangaroo 2

----

### Input Format

A single line of four space-separated integers denoting the respective values of $x_1$, $v_1$, $x_2$ and $v_2$.

----

### Constraints

- $0 \leq x_1, x_2 \leq 10000$

- $1 \leq v_1 \leq 10000$

- $1 \leq v_2 \leq 10000$

----

### Sample Input 0

```bash
0 3 4 2
```

----

### Sample Output 0

```bash
YES
```

----

### Explanation 0

The two kangaroos jump through the following sequence of locations:

![1516005283-e74e76ff0c-kangaroo.png](1516005283-e74e76ff0c-kangaroo.png)

From the image, it is clear that the kangaroos meet at the same location (number $12$ on the number line) after same number of jumps ($4$ jumps), and we print `YES`.

[Go to the top of the page](#title)

----

### Sample Input 1

```bash
0 2 5 3
```

----

### Sample Output 1

```bash
NO
```

----

### Explanation 1

The second kangaroo has a starting location that is ahead (further to the right) of the first kangaroo's starting location (i.e., $x_2 > x_1$). Because the second kangaroo moves at a faster rate (meaning $v_2 > v_1$) and is already ahead of the first kangaroo, the first kangaroo will never be able to catch up. Thus, we print `NO`. 

[Go to the top of the page](#title)

----

## Tests

The test cases are the following, in which you can find: _input_ and _expected output_.

----

### Test case 23

#### Input

```bash
1817 9931 8417 190
```

#### Expected Output

```bash
NO
```
----

### Test case 10

#### Input

```bash
43 2 7 2
```

#### Expected Output

```bash
NO
```

[Go to the top of the page](#title)
