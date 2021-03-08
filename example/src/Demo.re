/* module with a name Let_syntax provides promise related utilities for syntax */
module Let_syntax = Ppx_let_promise.Let_syntax;

let hello = () =>
  /* This line "waits" for promise to resolve and binds to its result value */
 {
    %bind
    {
      let message = Js.Promise.resolve("Hello!")
      // Js.Promise.resolve(message);
         print_endline(message);
    };

  };

// let hello = () =>
//   /* This line "waits" for promise to resolve and binds to its result value */
//   [%bind
//     {
//       let message = Js.Promise.resolve("Hello!");
//       // print_endline(message);
//       Js.Promise.resolve(print_endline(message));
//     }
//   ];

hello();
