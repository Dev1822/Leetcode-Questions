# Write your MySQL query statement below
Select e1.name as "Employee"
from employee e1
Left Join employee e2
on e1.managerId=e2.id
where e1.salary>e2.salary;