# Write your MySQL query statement below
SELECT 
D.NAME as "Department",
E.NAME as "Employee",
E.SALARY as "Salary"
from Employee e
LEFT JOIN Department d
on e.departmentId=d.id
where CONCAT(e.departmentId,e.salary) in (
    SELECT CONCAT(departmentId,MAX(salary))
    FROM EMPLOYEE
    GROUP BY DEPARTMENTId
);