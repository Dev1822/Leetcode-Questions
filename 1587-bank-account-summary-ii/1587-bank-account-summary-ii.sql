# Write your MySQL query statement below
Select Users.name, sum(Transactions.amount) as "balance"
from Users 
Left Join Transactions
on Users.account=Transactions.account 
GROUP BY Users.name
HAVING SUM(Transactions.amount) > 10000;