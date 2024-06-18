<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Introduction to C++</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            line-height: 1.6;
            margin: 20px;
            background-color: #f4f4f4;
        }
        h1, h2, h3 {
            color: #333;
        }
        p {
            color: #555;
        }
        .code {
            background-color: #2b2b2b;
            color: #f8f8f2;
            padding: 10px;
            border-radius: 5px;
            font-family: 'Courier New', Courier, monospace;
        }
        .keyword { color: #66d9ef; }
        .datatype { color: #a6e22e; }
        .comment { color: #75715e; }
        .string { color: #e6db74; }
        .number { color: #ae81ff; }
        .preprocessor { color: #f92672; }
        form {
            background: #fff;
            padding: 20px;
            border-radius: 5px;
            box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
            max-width: 600px;
            margin: 20px auto;
        }
        input, textarea {
            width: 100%;
            padding: 10px;
            margin: 10px 0;
            border: 1px solid #ccc;
            border-radius: 5px;
        }
        button {
            background: #333;
            color: #fff;
            padding: 10px 20px;
            border: none;
            border-radius: 5px;
            cursor: pointer;
        }
        button:hover {
            background: #555;
        }
    </style>
</head>
<body>
    <article>
        <h1>Introduction to C++</h1>
        <p>
            C++ is a powerful general-purpose programming language that was developed as an extension of the C programming language by Bjarne Stroustrup in 1979 at Bell Labs. It was designed to provide object-oriented capabilities with the efficiency and flexibility of C. Over the years, C++ has evolved and become one of the most widely used programming languages, particularly in systems programming, game development, and real-time simulations.
        </p>
        
        <h2>Features of C++</h2>
        <h3>1. Object-Oriented Programming</h3>
        <p>
            C++ supports object-oriented programming (OOP) which allows developers to create objects that encapsulate data and functions together. This promotes code reuse and modularity. Key concepts of OOP in C++ include classes, objects, inheritance, polymorphism, and encapsulation.
        </p>
        
        <h3>2. Standard Template Library (STL)</h3>
        <p>
            The Standard Template Library (STL) is a powerful feature of C++ that provides a collection of template classes and functions for common data structures and algorithms. STL includes features such as vectors, lists, queues, stacks, and various sorting and searching algorithms.
        </p>
        
        <h3>3. Memory Management</h3>
        <p>
            C++ provides fine-grained control over memory management. It supports dynamic allocation and deallocation of memory using operators like `new` and `delete`. This level of control is crucial for system-level programming where performance and resource management are critical.
        </p>
        
        <h3>4. Performance</h3>
        <p>
            C++ is known for its high performance and close-to-hardware capabilities. It allows developers to write code that is efficient and fast, making it ideal for performance-critical applications such as game development, real-time simulations, and embedded systems.
        </p>
        
        <h2>Example Code</h2>
        <pre class="code">
<span class="preprocessor">#include</span> <span class="string">&lt;iostream&gt;</span>

<span class="keyword">using</span> <span class="keyword">namespace</span> <span class="datatype">std</span>;

<span class="keyword">int</span> <span class="datatype">main</span>() {
    <span class="comment">// Print Hello, World!</span>
    <span class="datatype">cout</span> <span class="operator">&lt;&lt;</span> <span class="string">"Hello, World!"</span> <span class="operator">&lt;&lt;</span> <span class="datatype">endl</span>;
    <span class="keyword">return</span> <span class="number">0</span>;
}
        </pre>

        <h2>Applications of C++</h2>
        <p>
            C++ is used in a wide range of applications across various domains. Here are some common areas where C++ excels:
        </p>
        <ul>
            <li><strong>Game Development:</strong> C++ is widely used in the development of high-performance games and game engines like Unreal Engine and Unity.</li>
            <li><strong>System Software:</strong> Many operating systems, file systems, and device drivers are written in C++ due to its efficiency and control over system resources.</li>
            <li><strong>Embedded Systems:</strong> C++ is used in developing software for embedded systems found in consumer electronics, automotive systems, and industrial automation.</li>
            <li><strong>Real-Time Simulations:</strong> C++ is often used in scientific simulations and real-time applications where performance is critical.</li>
            <li><strong>Financial Software:</strong> Many trading systems and financial modeling applications use C++ for its performance and reliability.</li>
        </ul>
        
        <h2>Getting Started with C++</h2>
        <p>
            To start programming in C++, you need to set up a development environment. Here are the basic steps:
        </p>
        <ol>
            <li><strong>Install a C++ Compiler:</strong> Popular compilers include GCC (GNU Compiler Collection) and Microsoft Visual C++.</li>
            <li><strong>Choose an Integrated Development Environment (IDE):</strong> IDEs like Visual Studio, Code::Blocks, and CLion provide powerful tools for writing and debugging C++ code.</li>
            <li><strong>Write Your First Program:</strong> Start with simple programs to get familiar with the syntax and features of C++.</li>
            <li><strong>Learn C++ Concepts:</strong> Study C++ programming concepts, including data structures, algorithms, and design patterns.</li>
        </ol>
        
        <h2>Resources for Learning C++</h2>
        <p>
            Here are some recommended resources to help you learn C++:
        </p>
        <ul>
            <li><a href="https://www.cplusplus.com/">cplusplus.com</a> - A comprehensive reference for C++ language and standard library.</li>
            <li><a href="https://www.learncpp.com/">LearnCpp.com</a> - A free tutorial site with detailed explanations and examples.</li>
            <li><a href="https://www.udemy.com/course/beginning-c-plus-plus-programming/">Udemy C++ Courses</a> - Online courses with video lectures and hands-on projects.</li>
            <li><a href="https://www.coursera.org/specializations/cplusplus">Coursera C++ Specialization</a> - A series of courses offered by top universities.</li>
        </ul>
    </article>

    <form action="submit_cpp_form.php" method="post">
        <h2>Contact Us</h2>
        <label for="name">Name:</label>
        <input type="text" id="name" name="name" required>

        <label for="email">Email:</label>
        <input type="email" id="email" name="email" required>

        <label for="message">Message:</label>
        <textarea id="message" name="message" rows="4" required></textarea>

        <button type="submit">Submit</button>
    </form>
</body>
</html>
