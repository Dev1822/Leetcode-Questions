# Write your MySQL query statement below
SELECT v.customer_id, count(*) AS "count_no_trans"
FROM VISITS v
WHERE v.visit_id NOT IN (
    SELECT DISTINCT t.visit_id from TRANSACTIONS t
)
GROUP BY v.customer_id;