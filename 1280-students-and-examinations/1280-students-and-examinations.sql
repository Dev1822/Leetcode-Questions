# Write your MySQL query statement below
SELECT s.student_id, s.student_name, sub.subject_name, (
    SELECT count(*) from examinations e WHERE e.student_id=s.student_id AND e.subject_name = sub.subject_name
) as "attended_exams"
FROM Students s
CROSS JOIN SUBJECTS sub
ORDER BY student_id,subject_name;