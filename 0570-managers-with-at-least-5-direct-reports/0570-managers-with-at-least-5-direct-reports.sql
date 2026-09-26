# Write your MySQL query statement below
SELECT name from EMPLOYEE WHERE id IN (SELECT managerId FROM EMPLOYEE GROUP BY managerId HAVING COUNT(*)>=5);