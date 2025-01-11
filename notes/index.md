Here’s a C++ datatypes cheatsheet with their sizes and ranges:

| **Data Type**        | **Size (bytes)** | **Range**                                         |
|----------------------|------------------|---------------------------------------------------|
| **`char`**            | 1                | -128 to 127 (signed), 0 to 255 (unsigned)         |
| **`short`**           | 2                | -32,768 to 32,767 (signed), 0 to 65,535 (unsigned)|
| **`int`**             | 4                | -2,147,483,648 to 2,147,483,647 (signed), 0 to 4,294,967,295 (unsigned)|
| **`long`**            | 4 or 8           | -2,147,483,648 to 2,147,483,647 (signed) or up to 9,223,372,036,854,775,807 (signed) for 64-bit systems|
| **`long long`**       | 8                | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (signed)|
| **`float`**           | 4                | ±1.5 × 10^−45 to ±3.4 × 10^38 (approx.)          |
| **`double`**          | 8                | ±5.0 × 10^−324 to ±1.7 × 10^308 (approx.)        |
| **`long double`**     | 8 or 16          | Depends on implementation (usually more precise than `double`)|
| **`bool`**            | 1                | `true` or `false`                                 |
| **`wchar_t`**         | 2 or 4           | Depends on platform, typically 0 to 65,535 or 0 to 4,294,967,295 |
| **`void`**            | N/A              | N/A                                               |

These sizes and ranges can vary slightly depending on the platform and compiler being used.