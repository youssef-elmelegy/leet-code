# Write your MySQL query statement below
SELECT teacher_id , count(DISTINCT (subject_id)) AS cnt
from Teacher 
group by teacher_id;