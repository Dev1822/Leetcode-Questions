# Write your MySQL query statement below
SELECT 
d.name as "Department",
e.name as "Employee",
e.salary as "Salary"
from Employee e
INNER JOIN Department d
on e.departmentId=d.id
where CONCAT(e.departmentId,e.salary) in (
    SELECT CONCAT(departmentId,MAX(salary))
    FROM Employee
    group by departmentId
);