evaluations = [
    {"name": "Agent Cole", "score": 78},
    {"name": "Dr. Weiss", "score": 92},
    {"name": "Technician Moore", "score": 61},
    {"name": "Researcher Lin", "score": 88}
]

top_performer = max(evaluations, key=lambda x: x["score"])

print(f"{top_performer['name']} - {top_performer['score']}")