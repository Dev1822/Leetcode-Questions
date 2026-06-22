# Write your MySQL query statement below
(SELECT u.name as results
from Users u
Inner Join MovieRating mr
on u.user_id=mr.user_id
group by mr.user_id,u.name
order by count(*) DESC,u.name ASC
Limit 1
)

UNION ALL

(SELECT m.title
FROM Movies m
Inner JOIN MovieRating mr
ON m.movie_id = mr.movie_id
WHERE YEAR(mr.created_at) = 2020
AND MONTH(mr.created_at) = 2
GROUP BY m.movie_id, m.title
ORDER BY AVG(mr.rating) DESC, m.title ASC
LIMIT 1
)
;