# Write your MySQL query statement below
SELECT s.USER_ID,IFNULL(ROUND(SUM(ACTION="confirmed")/COUNT(*),2),0) AS "confirmation_rate"
FROM CONFIRMATIONS c
RIGHT JOIN SIGNUPS s
ON s.USER_ID=c.USER_ID
GROUP BY USER_ID;