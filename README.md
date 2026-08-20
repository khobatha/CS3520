# CS3520 Course Examples

This repository contains shared code examples, starter files, and supporting material for CS3520. It is intended to be a living course repository: each offering of the class can add new examples while preserving older material for reference.

Students should fork this repository, clone their fork, and use it to run, modify, and extend the examples covered in class.

## Repository Layout

```text
.
├── examples/      In-class code examples, organized by year
├── labs/          Optional practice material and lab scaffolds
├── resources/     Reference notes, links, and setup guidance
├── templates/     Reusable starter structures for new examples
└── README.md      Course repository overview
```

## Getting Started

1. Fork this repository to your own GitHub account.
2. Clone your fork:

   ```bash
   git clone https://github.com/<your-username>/CS3520.git
   cd CS3520
   ```

3. Keep the main course repository as an upstream remote:

   ```bash
   git remote add upstream https://github.com/khobatha/CS3520.git
   ```

4. Pull updates during the semester:

   ```bash
   git fetch upstream
   git merge upstream/main
   ```

## Working With Examples

Each example should live in its own folder and include a short `README.md` explaining:

- what the example demonstrates
- how to compile or run it
- which class meeting, topic, or year it belongs to
- any expected input/output

For yearly material, prefer this structure:

```text
examples/
└── 2026/
    └── example-name/
        ├── README.md
        └── source files
```

## Conventions

- Use lowercase folder names with hyphens, such as `binary-search` or `prime-reversible-squares`.
- Keep generated files, compiled binaries, and IDE-specific folders out of Git.
- Prefer small, focused examples over large combined programs.
- Include build/run commands in the example README whenever possible.
- Do not commit private student data, grades, credentials, or machine-specific configuration.

## Current Material

- `examples/2026/prime-reversible-squares`: starter files for the prime reversible squares example.
