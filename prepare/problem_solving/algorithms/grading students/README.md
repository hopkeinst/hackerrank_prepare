<a id="title"></a>
# Grading Students

Link -> [https://www.hackerrank.com/challenges/grading/problem](https://www.hackerrank.com/challenges/grading/problem)

## Problem

HackerLand University has the following grading policy:

- Every student receives a $grade$ in the inclusive range from $0$ to $100$.

- Any $grade$ less than $40$ is a failing grade.

Sam is a professor at the university and likes to round each student's $grade$ according to these rules:

- If the difference between the $grade$ and the next multiple of $5$ is less than $3$, round $grade$ up to the next multiple of $5$.

- If the value of $grade$ is less than $38$, no rounding occurs as the result will still be a failing grade.

----

### Example

- $grade = 84$ round to $85$ (85 - 84 is less than 3)

- $grade = 29$ do not round (result is less than 40)

- $grade = 57$ do not round (60 - 57 is 3 or higher)

Given the initial value of $grade$ for each of Sam's $n$ students, write code to automate the rounding process. 

----

### Function Description

Complete the function `gradingStudents` in the editor below.

`gradingStudents` has the following parameter(s):

- int grades[n]: the grades before rounding

----

### Return

- int[n]: the grades after rounding as appropriate

----

### Input Format

The first line contains a single integer, $n$, the number of students.

Each line $i$ of $n$ the subsequent lines contains a single integer, $grades[i]$.

----

### Constraints

- $1 \leq n \leq 60$

- $0 \leq grades[i] \leq 100$

----

### Sample Input

```bash
4
73
67
38
33
```

----

### Sample Output

```bash
75
67
40
33
```

----

### Explanation

| ID | Original Grade | Final Grade |
| ---- | ---- | ---- |
| 1 | 73 | 75 | 
| 2 | 67 | 67 | 
| 3 | 38 | 40 |
| 4 | 33 | 33 |

- Student $1$ received a $73$, and the next multiple of $5$ from $73$ is $75$. Since $75 - 73 < 3$, the student's grade is rounded to $75$.

- Student $2$ received a $67$, and the next multiple of $5$ from $67$ is $70$. Since $70 - 67 = 3$, the grade will not be modified and the student's final grade is $67$.

- Student $3$ received a $38$, and the next multiple of $5$ from $38$ is $40$. Since $40 - 38 < 3$, the student's grade is rounded to $40$.

- Student $4$ received a $33$, so the grade will not be modified and the student's final grade is $33$.

----

## Tests

The test cases are the following, in which you can find: _input_ and _expected output_.

----

### Test case 0

#### Input

```bash
4
73
67
38
33
```

#### Expected Output

```bash
75
67
40
33
```

----

### Test case 11

#### Input

```bash
60
64
24
68
14
53
49
45
99
55
24
59
67
8
76
37
24
24
73
81
37
47
63
99
63
40
54
82
9
80
84
15
32
51
18
70
4
86
59
32
68
22
1
71
51
81
22
35
65
9
17
94
69
40
39
52
94
84
13
68
95
```

#### Expected Output

```bash
65
24
70
14
55
50
45
100
55
24
60
67
8
76
37
24
24
75
81
37
47
65
100
65
40
55
82
9
80
85
15
32
51
18
70
4
86
60
32
70
22
1
71
51
81
22
35
65
9
17
95
70
40
40
52
95
85
13
70
95
```

[Go to the top of the page](#title)
