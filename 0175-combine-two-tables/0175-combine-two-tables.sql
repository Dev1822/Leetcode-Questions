# Write your MySQL query statement below
Select p.firstName,p.lastName,a.city,a.state 
from person p
Left Join address a
on p.personId=a.personId;