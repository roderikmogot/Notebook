import './App.css';
import React, {Component} from 'react';
import Person from './Person/Person.js';

class App extends Component {
    state = {
        persons: [
            {id: 'asd', name: 'Rod', age: 17},
            {id: 'asd1', name: 'Randy', age: 16},
            {id: 'asd2', name: 'Will', age: 15}
        ],
        anotherVar: 'hello',
        showPersons: false
    };

    switchNameHandler = (newName) => {
        // DON'T DO THIS: this.state.persons[0].name = 'Mogot';
        this.setState({
            persons: [
                {name: newName, age: 27},
                {name: 'Randy', age: 16},
                {name: 'Will', age: 35}
            ]
        });
    };
    
    // Changing each name in each textbox, most efficient way
    nameChangedHandler = (event, id) => {
        const personIndex = this.state.persons.findIndex(p => {
            return p.id === id
        });

        const person = {
            ...this.state.persons[personIndex]
        };

        person.name = event.target.value;

        const persons = [...this.state.persons];
        persons[personIndex] = person;

        this.setState({persons: persons});
    }

    deletePersonHandler = (personIndexInArray) => {
        // Best practice is to copy the old array

        // 1st Approach: const personss = this.state.persons.slice();
        const personss = [...this.state.persons];

        // Removes 1 element from the array
        personss.splice(personIndexInArray,1);

        // Update the array to the state then render
        this.setState({persons: personss});
    }

    nameToggleHandler = () => {
        const showPerson = this.state.showPersons;
        this.setState({showPersons: !showPerson});
    }

    render() {

        // Inline Javascript CSS
        const styleCSS = {
            backgroundColor: 'white',
            font: 'inherit',
            border: '1px solid blue',
            padding: '8px',
            cursor: 'pointer'
        };

        let persons = null;

        if(this.state.showPersons){
            persons = (
                <div>
                    {this.state.persons.map((persons, index) => {
                        return <Person
                            click = {() => this.deletePersonHandler(index)}
                            name={persons.name}
                            age={persons.age}

                            // Must be unique such as using an id for every element in array
                            // Very efficient when using big datas
                            key={persons.id}

                            changed={(event) => this.nameChangedHandler(event, persons.id)}
                        />
                    })}
                </div>
            );
        }

        return (
            <div className="App">
                <h1>Hi, I'm React App</h1>
                <button style={styleCSS} onClick={this.nameToggleHandler}>Toggle name</button>
                {persons}
            </div>
        )
    }
}

export default App;
