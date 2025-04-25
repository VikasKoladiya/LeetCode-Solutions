# Write your MySQL query statement below
SELECT (SELECT DISTINCT Salary from Employee ORDER BY salary DESC limit 1 offset 1)
    AS SecondHighestSalary;