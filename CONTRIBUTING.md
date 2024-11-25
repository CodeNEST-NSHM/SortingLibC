# Contributing to Sorting Library in C

Thank you for your interest in contributing to the Sorting Library project! Contributions are welcome and greatly appreciated. This guide outlines the process for contributing to the project.

---

## **How Can You Contribute?**

1. **Reporting Bugs**
   - If you encounter a bug, please [open an issue](#submitting-issues).
   - Include details about the environment (e.g., OS, compiler version) and steps to reproduce the issue.

2. **Suggesting Enhancements**
   - Have ideas for improvements? Let us know by creating an issue and describing your suggestion in detail.

3. **Submitting Code**
   - Add new sorting algorithms.
   - Improve documentation or examples.
   - Refactor or optimize existing code.
   - Fix bugs or other issues.

4. **Improving Documentation**
   - Help improve the `README.md`, comments, or function documentation.
   - Translate documentation into other languages.

---

## **Getting Started**

### **1. Fork the Repository**
1. Click the "Fork" button at the top of this repository.
2. Clone the forked repository to your machine:
   ```bash
   git clone https://github.com/your-username/sorting-library-c.git
   cd sorting-library-c
   ```

### **2. Set Up Your Environment**
Ensure you have:
- GCC or another C compiler.
- CMake for build management.

### **3. Create a Branch**
Always create a new branch for your work:
```bash
git checkout -b feature/your-feature-name
```

### **4. Make Your Changes**
- Edit code or documentation.
- Test your changes thoroughly.

### **5. Commit Your Changes**
Write a descriptive commit message:
```bash
git add .
git commit -m "Add feature: Describe your changes"
```

### **6. Push and Create a Pull Request**
Push your branch to your forked repository:
```bash
git push origin feature/your-feature-name
```
Open a pull request on the original repository:
- Provide a clear title and description of your changes.

---

## **Code Guidelines**

### **File Structure**
- Place new header files in the `headers/` directory.
- Place implementations in separate `.c` files in the `headers/` directory.

### **Code Style**
- Use consistent indentation (spaces or tabs, match the existing style).
- Use descriptive function and variable names.
- Document all functions with:
  - Description of purpose.
  - Parameters and return values.

### **Testing**
- Ensure all features work as intended before submission.
- Include test cases for new algorithms or features in `main.c` if applicable.

---

## **Submitting Issues**

If you find bugs or have feature requests, submit an issue:
- Use a clear and descriptive title.
- Provide detailed steps to reproduce the issue or describe the feature.

---

## **Code of Conduct**

We are committed to fostering an inclusive and respectful community. Please follow our [Code of Conduct](#) to ensure a welcoming environment for all contributors.

---

Thank you for contributing to the Sorting Library in C!
