import './App.css';
import React, {Component} from 'react';
import Person from './Person/Person.js';

class App extends Component {
    state = {
        persons: [
            {name: 'Rod', age: 17},
            {name: 'Randy', age: 16},
            {name: 'Will', age: 15}
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

    nameChangedHandler = event => {
        this.setState({
            persons: [
                {name: 'Rod', age: 27},

                // Target -> the input in which we typed
                // Value -> what we typed
                {name: event.target.value, age: 16},

                {name: 'Will', age: 35}
            ]
        });
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

        return (
            <div className="App">
                <h1>Hi, I'm React App</h1>
                <button style={styleCSS} onClick={this.nameToggleHandler}>Switch name</button>
                {this.state.showPersons === true ?
                    <div>
                        <Person
                            name={this.state.persons[0].name}
                            age={this.state.persons[0].age}
                        />
                        <Person
                            name={this.state.persons[1].name}
                            age={this.state.persons[1].age}
                            click={this.switchNameHandler.bind(this, 'Rode')}
                            changed={this.nameChangedHandler}
                        >
                            My hobbies: running </Person>
                        <Person
                            name={this.state.persons[2].name}
                            age={this.state.persons[2].age}/>
                    </div> : null
                }
            </div>
        )
    }
}

export default App;
