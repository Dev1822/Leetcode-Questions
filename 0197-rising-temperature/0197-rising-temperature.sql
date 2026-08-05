# Write your MySQL query statement below
SELECT W2.id AS "Id" FROM WEATHER W1
INNER JOIN WEATHER W2
ON DATEDIFF(W2.recordDate,W1.recordDate)=1
WHERE W2.temperature > W1.temperature;