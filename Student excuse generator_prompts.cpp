First prompt
I want to create a C++ console program called "AI Student Excuse Generator".

The program should ask the user to enter their name and then generate some funny excuses for not completing homework. I want to store at least 10 different excuse sentences in a vector, and each sentence should include a placeholder like {name}.

The program should randomly pick excuses each time it runs, so the output is different. It should also replace {name} with the actual name entered by the user.

I want the output to look clean and nicely formatted so it feels like a proper mini project.

Also, please first give me a version with a small bug (like repeated output or incorrect replacement), and then give me the corrected version with a short explanation of the mistake.



second prompt
A C++ console application named “AI Student Excuse Generator” is designed to generate random and funny excuses for students who are unable to complete their homework on time. The program takes the user’s name as input and stores around 10 different excuse sentences in a vector. Each sentence contains a {name} placeholder, which should be replaced with the actual name entered by the user.

The program is expected to randomly select and display 3 different excuses every time it runs, ensuring that the output changes on each execution. However, the current implementation has several issues. The {name} placeholder is not being replaced correctly in all cases, leading to incorrect or incomplete output. Additionally, the random selection logic is flawed, sometimes causing the same excuse to repeat instead of showing unique ones.

The task is to fix these logical and functional errors so that the program properly replaces {name}, ensures truly random and non-repeating selection of excuses, and produces a clean and correct output every time it runs.
