<a id="title"></a>
# Time Convertion

Link -> [https://www.hackerrank.com/challenges/time-conversion/problem](https://www.hackerrank.com/challenges/time-conversion/problem)

## Problem

Given a time in [12-hour AM/PM format](https://en.wikipedia.org/wiki/12-hour_clock), convert it to military (24-hour) time.

> [!NOTE]
> - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
> - 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock. 
----

### Example

- $s = '12:01:00PM'$

Return $'12:01:00'$

- $s = '12:01:00AM'$

Return $'00:01:00'$

----

### Function Description

Complete the `timeConversion` function in the editor below. It should return a new string representing the input time in 24 hour format.

`timeConversion` has the following parameter(s):

- string s: a time in 12 hour format

----

### Return

- string: the time in 24 hour format

----

### Input Format

A single string $s$ that represents a time in $12-hour$ clock format (i.e.: $hh:mm:ssAM$ or $hh:mm:ssPM$)

----

### Constraints

- All input times are valid

----

### Sample Input

```bash
07:05:45PM
```

----

### Sample Output

```bash
19:05:45
```

----

## Test cases

The test cases are the following, in which you can find: _input_ and _expected output_.

----

### Test case 0

#### Input

```bash
07:05:45PM
```

#### Expected Output

```bash
19:05:45
```

----

### Test case 8

#### Input

```bash
12:00:00AM
```

#### Expected Output

```bash
00:00:00
```

[Go to the top of the page](#title)
