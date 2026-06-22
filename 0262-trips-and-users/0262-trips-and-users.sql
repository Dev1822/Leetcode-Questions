# Write your MySQL query statement below
SELECT request_at as Day,
ROUND(SUM(CASE WHEN status != 'completed' THEN 1 ELSE 0 END) / COUNT(*),2) as "Cancellation Rate"
from Trips t
Inner Join Users u
on t.client_id=u.users_id
Inner Join Users d
on t.driver_id=d.users_id
where u.banned="No" AND d.banned="No" AND request_at BETWEEN "2013-10-01" AND "2013-10-03"
group by request_at;